@interface PSGTVOutManager : NSObject {
    int _connectedAdapterType;
}

- (void)refreshConnectedAdapterType;
- (int)connectedAdapterType;
- (id)init;

@end
