@class NSData, BRCChecksummingOutputStream;

@interface BRCPackageChecksummer : NSObject {
    BRCChecksummingOutputStream *_stream;
}

@property (readonly, nonatomic) NSData *signature;

- (void)done;
- (void).cxx_destruct;
- (id)init;
- (BOOL)addItem:(id)a0 error:(id *)a1;

@end
