@class CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CoreDAVErrorItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validSyncToken;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *noUIDConflict;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validAddressData;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxResourceSize;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *uid;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *ctagOkay;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxImageSize;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *invalidImageType;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *imageError;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxAttendees;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *quotaExceeded;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxResources;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validTimezone;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validSplit;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *guardianRestricted;
@property (retain, nonatomic) CoreDAVLeafItem *status;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
