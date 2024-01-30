@class NSObject, NSMutableArray, IPAMetadata;
@protocol OS_dispatch_queue;

@interface IPAMetadataStateHandler : NSObject {
    IPAMetadata *_metadata;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _stateHandle;
    NSMutableArray *_breadcrumbs;
}

+ (id)redactedDescriptionForPath:(id)a0;
+ (id)redactedDescriptionForFileURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (void)dealloc;
- (id)_stateInformation;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)addBreadcrumb:(id)a0;
- (void)_addBreadcrumbWithTimeInterval:(double)a0 message:(id)a1;

@end
