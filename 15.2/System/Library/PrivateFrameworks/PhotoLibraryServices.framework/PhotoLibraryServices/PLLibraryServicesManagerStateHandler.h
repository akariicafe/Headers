@class NSString, PLLibraryServicesManager, NSObject;
@protocol OS_dispatch_queue;

@interface PLLibraryServicesManagerStateHandler : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _stateHandle;
}

@property (readonly, copy) NSString *logPrefix;

- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)dealloc;
- (id)initWithLibraryServicesManager:(id)a0;

@end
