@class NSString, NSData;

@interface FTMutableVocToken : FTVocToken

@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSData *blob;

- (id)init;
- (void)blob:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
