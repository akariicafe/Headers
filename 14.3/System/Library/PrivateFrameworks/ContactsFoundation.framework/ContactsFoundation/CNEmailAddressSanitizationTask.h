@class NSString;

@interface CNEmailAddressSanitizationTask : CNTask {
    NSString *_address;
}

- (id)initWithAddress:(id)a0;
- (void).cxx_destruct;
- (void)removeMailtoPrefix;
- (id)description;
- (id)run:(id *)a0;

@end
