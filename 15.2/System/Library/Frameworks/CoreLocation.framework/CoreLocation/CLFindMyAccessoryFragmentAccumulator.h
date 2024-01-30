@class NSMutableDictionary;

@interface CLFindMyAccessoryFragmentAccumulator : NSObject

@property (nonatomic) NSMutableDictionary *uuidToData;
@property (nonatomic) unsigned long long maxBytesPerUUID;

+ (id)convertDataStatusToString:(unsigned long long)a0;

- (id)dataForUUID:(id)a0;
- (id)initWithMaxBytesPerUUID:(unsigned long long)a0;
- (BOOL)clearForUUID:(id)a0;
- (BOOL)appendData:(id)a0 forUUID:(id)a1;
- (unsigned long long)getDataStatusForUUID:(id)a0;
- (void)dealloc;

@end
