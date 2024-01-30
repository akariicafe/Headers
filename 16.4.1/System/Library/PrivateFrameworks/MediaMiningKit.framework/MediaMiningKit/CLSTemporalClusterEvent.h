@class NSString;

@interface CLSTemporalClusterEvent : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned char category;

+ (unsigned char)_categoryFromPortraitEventCategory:(unsigned char)a0;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 category:(unsigned char)a1;
- (id)initWithPortraitEvent:(id)a0;

@end
