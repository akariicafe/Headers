@class NSString, NSSet;

@interface CalDAVServerVersion : NSObject <NSCopying>

@property (nonatomic) double version;
@property (nonatomic) BOOL supportsTimeRangeFilter;
@property (nonatomic) BOOL supportsTimeRangeFilterWithoutEndDate;
@property (nonatomic) BOOL supportsTimeRangeFilterOnInbox;
@property (nonatomic) BOOL supportsAutoSchedule;
@property (nonatomic) BOOL supportsPrivateComments;
@property (nonatomic) BOOL supportsLikenessPropagation;
@property (nonatomic) BOOL supportsSharing;
@property (nonatomic) BOOL supportsSharingNoScheduling;
@property (nonatomic) BOOL supportsCalendarProxy;
@property (nonatomic) BOOL supportsInboxAvailability;
@property (nonatomic) BOOL supportsPrivateEvents;
@property (nonatomic) BOOL supportsSubscriptionCalendars;
@property (nonatomic) BOOL supportsManagedSubscriptionCalendars;
@property (nonatomic) BOOL supportsSubscriptionMirroring;
@property (nonatomic) BOOL supportsParticipantRoles;
@property (nonatomic) BOOL supportsPrincipalPropertySearch;
@property (nonatomic) BOOL supportsExtendedCalendarQuery;
@property (nonatomic) BOOL supportsRequestCompression;
@property (nonatomic) BOOL supportsManagedAttachments;
@property (nonatomic) BOOL supportsCheckForValidEmail;
@property (nonatomic) BOOL supportsChecksumming;
@property (nonatomic) BOOL supportsCalendarHomeSync;
@property (nonatomic) BOOL supportsCalendarNoTimezone;
@property (nonatomic) BOOL supportsCalendarRecurrenceSplit;
@property (nonatomic) BOOL supportsCalendarAudit;
@property (nonatomic) BOOL supportsTelephone;
@property (nonatomic) BOOL supportsDefaultAlarms;
@property (nonatomic) BOOL alwaysSupportsFreebusyOnOutbox;
@property (nonatomic) BOOL expandPropertyReportIsUnreliable;
@property (copy, nonatomic) NSString *supportedCalendarComponentSets;
@property (retain, nonatomic) NSSet *complianceClasses;
@property (copy, nonatomic) NSString *serverHeader;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL requiresOpeningAttachmentAsLink;
@property (readonly, nonatomic) BOOL shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;

+ (id)_prototypeMatchingServerHeaders:(id)a0;
+ (id)versionWithHTTPHeaders:(id)a0;
+ (id)versionWithPropertyValue:(id)a0;

- (id)_allFlagKeys;
- (id)_propertiesToComplianceClasses;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)_setPropertiesFromComplianceClasses:(id)a0;
- (unsigned long long)hash;
- (id)propertyValue;
- (id)init;
- (id)description;
- (id)_additionalFlagKeys;
- (void).cxx_destruct;

@end
