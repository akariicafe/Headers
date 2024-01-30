@class NSXPCInterface;

@interface _NSXPCConnectionExportInfo : NSObject {
    id _exportedObject;
    NSXPCInterface *_exportedInterface;
    long long _exportCount;
}

- (id)description;
- (id)init;
- (void)dealloc;

@end
