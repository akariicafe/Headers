@class NSArray, NSMutableDictionary;

@interface MRVirtualOutputContextManager : NSObject {
    NSMutableDictionary *_ouputContextMap;
}

@property (readonly, nonatomic) NSArray *outputContext;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addOutputContext:(id)a0;
- (id)fetchForUID:(id)a0;
- (void)removeOutputContext:(id)a0;

@end
