@interface FATException : NSException <NSCoding, NSCopying>

+ (void)initialize;
+ (id)structName;
+ (id)structFields;

- (id)init;
- (void)write:(id)a0;
- (void)read:(id)a0;

@end
