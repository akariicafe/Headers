@class NSNumber, NSArray, NSData;

@interface MDMESSODetails : NSObject

@property (retain, nonatomic) NSNumber *iTunesStoreID;
@property (copy, nonatomic) NSArray *appIDs;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (retain, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads;
@property (retain, nonatomic) NSData *configurationProfile;

+ (id)essoDetailsWithJSONDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithiTunesStoreID:(id)a0 appIDs:(id)a1 associatedDomains:(id)a2 associatedDomainsEnableDirectDownloads:(id)a3 configurationProfile:(id)a4;

@end
