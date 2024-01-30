@class NSString, NSNumber;

@interface STMSizeCacheEntry : NSObject

@property (retain) NSString *itemPath;
@property (retain) NSNumber *itemSize;
@property unsigned long long fsEvtID;
@property unsigned long long status;
@property unsigned long long sizeEventID;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)sizeOperation;

@end
