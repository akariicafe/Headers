@interface SGMIAttachmentSizeHistogram : NSObject

@property (readonly, nonatomic) unsigned long long countUpTo8KB;
@property (readonly, nonatomic) unsigned long long count8KBTo32KB;
@property (readonly, nonatomic) unsigned long long count32KBTo128KB;
@property (readonly, nonatomic) unsigned long long count128KBTo512KB;
@property (readonly, nonatomic) unsigned long long count512KBTo2MB;
@property (readonly, nonatomic) unsigned long long countOver2MB;

- (id)numberArray;
- (id)description;
- (BOOL)isEmpty;
- (id)initWithNumberArray:(id)a0;
- (void)bucketizeWithSize:(unsigned long long)a0;

@end
