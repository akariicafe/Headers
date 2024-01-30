@class NSString;

@interface CDDevice : NSObject

@property (readonly) unsigned int identifier;
@property (readonly) NSString *modelIdentifier;
@property BOOL isDefaultPaired;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (id)initWithSession:(id)a0 identifier:(unsigned int)a1 modelIdentifier:(id)a2 error:(id *)a3;
- (id)initWithSession:(id)a0 identifier:(unsigned int)a1 modelIdentifier:(id)a2 defaultPaired:(BOOL)a3 error:(id *)a4;
- (id)readSystemDataWithError:(id *)a0;
- (BOOL)setSystemDataHandlerWithError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)requestSystemDataWithError:(id *)a0;
- (id)readLogDataWithError:(id *)a0;
- (BOOL)setLogDataHandlerWithError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)requestLogDataWithError:(id *)a0;
- (unsigned long long)hash;

@end
