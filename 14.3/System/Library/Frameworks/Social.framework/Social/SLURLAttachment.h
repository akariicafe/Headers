@interface SLURLAttachment : SLAttachment {
    long long _urlType;
}

- (long long)urlType;
- (id)initWithURL:(id)a0 ofType:(long long)a1 preview:(id)a2;
- (id)initWithURL:(id)a0 previewImage:(id)a1;

@end
