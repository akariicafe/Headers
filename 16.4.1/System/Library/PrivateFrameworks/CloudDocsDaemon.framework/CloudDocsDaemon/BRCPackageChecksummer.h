@class NSData, BRCChecksummingOutputStream;

@interface BRCPackageChecksummer : NSObject {
    BRCChecksummingOutputStream *_stream;
}

@property (readonly, nonatomic) NSData *signature;

- (BOOL)addItem:(id)a0 error:(id *)a1;
- (void)done;
- (id)init;
- (void).cxx_destruct;

@end
