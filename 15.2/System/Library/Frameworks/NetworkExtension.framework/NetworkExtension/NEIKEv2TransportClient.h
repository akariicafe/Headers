@class NEIKEv2IKESPI;
@protocol NEIKEv2TransportDelegate;

@interface NEIKEv2TransportClient : NSObject

@property (retain) NEIKEv2IKESPI *clientSPI;
@property BOOL wildcard;
@property (weak) id<NEIKEv2TransportDelegate> delegate;

- (id)description;
- (void).cxx_destruct;

@end
