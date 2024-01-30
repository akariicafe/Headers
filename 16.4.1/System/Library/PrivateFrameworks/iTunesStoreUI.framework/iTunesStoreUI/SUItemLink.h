@class NSString, NSURL;

@interface SUItemLink : NSObject <NSCopying>

@property (nonatomic) long long linkTarget;
@property (nonatomic) long long linkType;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *URL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
