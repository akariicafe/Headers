@class NSUUID, NSData;

@interface ISCacheImage : ISConcreteImage

@property (retain) NSUUID *uuid;
@property BOOL placeholder;
@property (readonly) NSData *validationToken;

- (BOOL)placeholder;
- (void)setPlaceholder:(BOOL)a0;
- (id)initWithData:(id)a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
