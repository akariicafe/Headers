@class NSString;

@interface ICSAttachment : ICSProperty

@property (retain, nonatomic) NSString *fmtype;
@property (retain, nonatomic) NSString *managed_id;
@property (retain, nonatomic) NSString *managed_filename;
@property (nonatomic) int size;
@property (nonatomic) BOOL x_apple_autoarchived;
@property (retain, nonatomic) NSString *x_apple_filename;
@property (retain, nonatomic) NSString *x_apple_ews_attachmentid;

- (id)initWithURL:(id)a0;
- (id)initWithData:(id)a0;
- (void)setData:(id)a0;
- (id)filename;
- (void)setURL:(id)a0;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (BOOL)hasSize;
- (BOOL)isBinary;
- (BOOL)shouldObscureValue;

@end
