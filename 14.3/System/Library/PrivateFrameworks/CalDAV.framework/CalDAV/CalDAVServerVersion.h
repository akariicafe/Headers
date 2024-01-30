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
@property (nonatomic) BOOL alwaysSupportsFreebusyOnOutbox;
@property (copy, nonatomic) NSString *supportedCalendarComponentSets;
@property (retain, nonatomic) NSSet *complianceClasses;
@property (copy, nonatomic) NSString *serverHeader;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL requiresOpeningAttachmentAsLink;
@property (readonly, nonatomic) BOOL shouldUseDeleteAndAddInsteadOfMoveBetweenCalendars;

+ (id)versionWithPropertyValue:(id)a0;
+ (id)versionWithHTTPHeaders:(id)a0;
+ (id)_prototypeMatchingServerHeaders:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)propertyValue;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_propertiesToComplianceClasses;
- (id)_additionalFlagKeys;
- (void)_setPropertiesFromComplianceClasses:(id)a0;
- (id)_allFlagKeys;

@end
