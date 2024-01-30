@class NSString;

@interface CDDevice : NSObject

@property (readonly) unsigned int identifier;
@property (readonly) NSString *modelIdentifier;
@property BOOL isDefaultPaired;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (id)initWithSession:(id)a0 identifier:(unsigned int)a1 modelIdentifier:(id)a2 defaultPaired:(BOOL)a3 error:(id *)a4;
- (id)initWithSession:(id)a0 identifier:(unsigned int)a1 modelIdentifier:(id)a2 error:(id *)a3;
- (id)readSystemDataWithError:(id *)a0;
- (BOOL)setSystemDataHandlerWithError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)requestSystemDataWithError:(id *)a0;
- (BOOL)setLogDataHandlerWithError:(id *)a0 handler:(id /* block */)a1;
- (id)readLogDataWithError:(id *)a0;
- (BOOL)requestLogDataWithError:(id *)a0;

@end
