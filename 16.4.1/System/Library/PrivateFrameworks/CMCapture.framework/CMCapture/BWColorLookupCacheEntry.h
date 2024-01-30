@class NSData;

@interface BWColorLookupCacheEntry : NSObject

@property (readonly, retain, nonatomic) NSData *foregroundColorLookupTable;
@property (readonly, retain, nonatomic) NSData *backgroundColorLookupTable;

- (id)initWithForegroundColorLookupTable:(id)a0 backgroundColorLookupTable:(id)a1;
- (void)dealloc;

@end
