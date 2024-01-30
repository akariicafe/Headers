@interface MapsSuggestionsBlockRunCondition : MapsSuggestionsBaseRunCondition {
    id /* block */ _block;
}

- (id)initWithName:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)shouldRun;

@end
