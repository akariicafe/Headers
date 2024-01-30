@class NSString;

@interface CPSClipEntryPointRecord : NSObject

@property (copy, nonatomic) NSString *appClipBundleID;
@property (copy, nonatomic) NSString *webClipIdentifier;
@property (nonatomic) double lastABRFetchTime;

- (void).cxx_destruct;
- (id)initWithSQLiteRow:(id)a0;

@end
