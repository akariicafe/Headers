@class NSMutableData;

@interface HMDStructuredDataOPACKWriter : HMDStructuredDataFoundationWriter {
    NSMutableData *_output;
}

- (void).cxx_destruct;
- (void)emitRootValue:(id)a0;

@end
