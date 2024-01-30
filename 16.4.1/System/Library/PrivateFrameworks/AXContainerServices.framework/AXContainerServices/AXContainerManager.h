@class AXUIClient;

@interface AXContainerManager : NSObject

@property (retain, nonatomic) AXUIClient *containerServerClient;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)deleteFileAtAccessibilityContainerPath:(id)a0 completion:(id /* block */)a1;
- (void)readDataForFileAtAccessibilityContainerPath:(id)a0 completion:(id /* block */)a1;
- (void)writeData:(id)a0 toFileAtAccessibilityContainerPath:(id)a1 completion:(id /* block */)a2;

@end
