@class NSString, NSURL;

@interface IAMImage : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) unsigned int height;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 url:(id)a1 width:(unsigned int)a2 height:(unsigned int)a3;
- (id)initWithICImage:(id)a0;
- (id)initWithIdentifier:(id)a0 url:(id)a1;

@end
