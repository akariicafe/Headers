@class NSString, NSData;

@interface QSSMutableWord : QSSWord

@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSData *pronunciations;
@property (nonatomic) int frequency;
@property (copy, nonatomic) NSString *tag;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)pronunciations:(id /* block */)a0;

@end
