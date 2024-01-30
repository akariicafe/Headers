@class NSData;

@interface OSAEphemeralLog : OSALog {
    NSData *_content;
}

- (void).cxx_destruct;
- (void)retire:(const char *)a0;
- (id)initWithData:(id)a0 andMetadata:(id)a1;

@end
