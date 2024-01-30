@interface DICryptoHelper : NSObject

+ (struct unique_ptr<char, std::function<void (char *)>> { struct __compressed_pair<char *, std::function<void (char *)>> { char *x0; struct function<void (char *)> { struct __value_func<void (char *)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; } x1; } x0; })getAuthEntryWithBackend:(struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; })a0 authTableNumEntries:(int)a1 mechanism:(int)a2 hasSaksKey:(BOOL *)a3 error:(id *)a4;
+ (BOOL)getPassphraseUsingSaksWithBackendXPC:(id)a0 passPhrase:(char *)a1 hasSaksKey:(BOOL *)a2 error:(id *)a3;

@end
