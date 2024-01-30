@class NSURL;

@interface MCMContainerSchemaActionMoveContents : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL *_sourceURL;
    NSURL *_destURL;
}

+ (id)actionIdentifier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)performWithError:(id *)a0;
- (id)initWithSourcePathArgument:(id)a0 destinationPathArgument:(id)a1 context:(id)a2;

@end
