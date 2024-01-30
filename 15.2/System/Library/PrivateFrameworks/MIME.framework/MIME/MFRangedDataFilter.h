@interface MFRangedDataFilter : MFBaseFilterDataConsumer {
    unsigned long long _consumedLength;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (id)rangedFilterWithConsumer:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)rangedFilterWithConsumers:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (long long)appendData:(id)a0;

@end
