@class NSString;

@interface DESpeakableString : NSObject

@property void *This;
@property (retain) NSString *print;
@property (retain) NSString *speak;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithPrint:(id)a0 speak:(id)a1;

@end
