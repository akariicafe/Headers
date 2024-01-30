@interface PSGTVOutManager : NSObject {
    int _connectedAdapterType;
}

- (int)connectedAdapterType;
- (id)init;
- (void)refreshConnectedAdapterType;

@end
