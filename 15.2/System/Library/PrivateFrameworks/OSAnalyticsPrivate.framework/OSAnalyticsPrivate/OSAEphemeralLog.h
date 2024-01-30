@class NSData;

@interface OSAEphemeralLog : OSALog {
    NSData *_content;
}

- (void)retire:(const char *)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 andMetadata:(id)a1;

@end
