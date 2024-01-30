@class NWPath;

@interface NENexusPathFlow : NENexusFlow {
    NWPath *_path;
}

- (id)parameters;
- (id)endpoint;
- (void).cxx_destruct;
- (id)clientIdentifier;

@end
