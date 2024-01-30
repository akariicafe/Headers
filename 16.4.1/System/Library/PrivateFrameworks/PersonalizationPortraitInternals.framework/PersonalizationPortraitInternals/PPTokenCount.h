@class NSString;

@interface PPTokenCount : NSObject

@property (retain, nonatomic) NSString *token;
@property (nonatomic) unsigned int count;

- (void).cxx_destruct;
- (id)initWithToken:(id)a0 count:(unsigned int)a1;

@end
