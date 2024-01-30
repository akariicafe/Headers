@class NSURL, NSString;

@interface MCMContainerSchemaActionSymlink : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSourceAndDestination> {
    NSURL *_linkURL;
    NSString *_targetPath;
}

+ (id)actionIdentifier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)performWithError:(id *)a0;
- (id)initWithSourcePathArgument:(id)a0 destinationPathArgument:(id)a1 context:(id)a2;

@end
