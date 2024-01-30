@class PFMetadata, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PFMetadataStateHandler : NSObject {
    PFMetadata *_metadata;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _stateHandle;
    NSMutableArray *_breadcrumbs;
}

+ (id)redactedDescriptionForFileURL:(id)a0;
+ (id)redactedDescriptionForPath:(id)a0;

- (id)_stateInformation;
- (void)_addBreadcrumbWithTimeInterval:(double)a0 message:(id)a1;
- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)initWithMetadata:(id)a0;
- (void)dealloc;
- (void)addBreadcrumb:(id)a0;

@end
