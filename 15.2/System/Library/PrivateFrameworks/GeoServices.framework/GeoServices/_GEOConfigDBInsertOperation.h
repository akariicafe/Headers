@class NSString, _GEOConfigDB;

@interface _GEOConfigDBInsertOperation : _GEOConfigDBOperationBase <_GEOConfigDBOperation> {
    _GEOConfigDB *_configDB;
    long long _rowId;
    NSString *_type;
    NSString *_key;
    NSString *_value;
    long long _parentId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)performOperation;
- (void).cxx_destruct;
- (id)init:(id)a0 rowId:(long long)a1 type:(id)a2 key:(id)a3 value:(id)a4 parentId:(long long)a5;

@end
