@interface FATException : NSException <NSCoding, NSCopying>

+ (void)initialize;
+ (id)structName;
+ (id)structFields;

- (void)write:(id)a0;
- (id)init;
- (void)read:(id)a0;

@end
