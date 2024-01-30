@class NSNumber, NSString, NSURL;

@interface SKUISearchRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *searchHintIndex;
@property (copy, nonatomic) NSString *searchHintOriginalTerm;
@property (copy, nonatomic) NSString *term;
@property (copy, nonatomic) NSURL *URL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
