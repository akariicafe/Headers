@class NSString, RUIObjectModel;

@interface AKAppleIDObjectModelFieldExtractor : NSObject <AKAppleIDServerUIFieldExtractor> {
    RUIObjectModel *_objectModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithObjectModel:(id)a0;
- (id)_valueForFieldWithID:(id)a0 inObjectModel:(id)a1;
- (id)_valueForTextFieldFromPage:(id)a0 rowID:(id)a1;
- (id)valueForFieldWithID:(id)a0;

@end
