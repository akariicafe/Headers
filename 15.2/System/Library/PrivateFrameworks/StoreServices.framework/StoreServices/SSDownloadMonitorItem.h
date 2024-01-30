@class NSString;

@interface SSDownloadMonitorItem : NSObject <SSXPCCoding>

@property (copy, nonatomic) NSString *clientIdentifier;
@property (nonatomic) long long itemState;
@property (copy, nonatomic) NSString *representativeTitle;
@property (copy, nonatomic) NSString *statusString;
@property (nonatomic) long long totalNumberOfItems;
@property (nonatomic) unsigned long long transferTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void)dealloc;

@end
