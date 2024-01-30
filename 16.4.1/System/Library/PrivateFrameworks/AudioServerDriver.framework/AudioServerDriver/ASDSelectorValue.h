@class NSString;

@interface ASDSelectorValue : NSObject

@property (nonatomic) unsigned int value;
@property (copy, nonatomic) NSString *name;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
