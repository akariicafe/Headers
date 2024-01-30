@class NSString, NSData;

@interface FTMutableWord : FTWord

@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSData *pronunciations;
@property (nonatomic) int frequency;
@property (copy, nonatomic) NSString *tag;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)pronunciations:(id /* block */)a0;

@end
