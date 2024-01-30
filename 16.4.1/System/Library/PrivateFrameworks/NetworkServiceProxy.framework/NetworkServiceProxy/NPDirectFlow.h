@class NSNumber, NSPConnectionInfo, NSDate;

@interface NPDirectFlow : NSObject {
    struct nw_protocol { unsigned char flow_id[16]; struct nw_protocol_identifier *identifier; struct nw_protocol_callbacks *callbacks; struct nw_protocol *output_handler; void *handle; struct nw_protocol *default_input_handler; void *output_handler_context; } _protocol;
}

@property (readonly) NSNumber *identifier;
@property (readonly) struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *protocol;
@property (retain) NSPConnectionInfo *connectionInfo;
@property (readonly) NSDate *startDate;
@property (retain) NSDate *connectionStartDate;
@property (retain) NSDate *firstTxByteTimestamp;

+ (void)initializeProtocol;

- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)createConnectionInfo;
- (void)handleDetachedFromProtocol;

@end
