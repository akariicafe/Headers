@interface MFLineEndingConverterFilter : MFBaseFilterDataConsumer {
    BOOL _lastCR;
}

- (void)done;
- (long long)appendData:(id)a0;

@end
