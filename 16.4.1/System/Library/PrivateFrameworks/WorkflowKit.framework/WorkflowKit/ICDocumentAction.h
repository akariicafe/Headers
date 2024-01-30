@class NSArray;

@interface ICDocumentAction : ICAction {
    NSArray *_inputContentClasses;
}

@property (readonly, nonatomic) NSArray *fileTypes;

- (id)descriptionDictionary;
- (id)identifier;
- (void).cxx_destruct;
- (id)name;
- (id)fileTypeForOpeningItem:(id)a0;
- (id)inputContentClasses;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;

@end
