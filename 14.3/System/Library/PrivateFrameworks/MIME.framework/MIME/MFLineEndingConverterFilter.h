@interface MFLineEndingConverterFilter : MFBaseFilterDataConsumer {
    BOOL _lastCR;
}

- (long long)appendData:(id)a0;
- (void)done;

@end
