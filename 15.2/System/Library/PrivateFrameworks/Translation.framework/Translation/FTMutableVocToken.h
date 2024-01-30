@class NSString, NSData;

@interface FTMutableVocToken : FTVocToken

@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSData *blob;

- (void)blob:(id /* block */)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
